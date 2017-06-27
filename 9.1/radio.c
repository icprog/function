
/***************************************************************************
定义	S0 		LENGTH		TID  	RID		CMD
数组位置0		1			2		6		10
**************************************************************************/
/***************************************************************************
读写器下发读命令
定义		保留 	模式		偏移  	长度	
数组位置	11		13			14		16		
**************************************************************************/
typedef struct
{
	uint8_t mode,
	uint8_t length,
	uint16_t offset
}file_typedef;
file_typedef f_para;

#define CMD_IDX	10
#define FILE_MODE_IDX (CMD_IDX+3)
#define FILE_OFFSET_IDX (CMD_IDX+4)
#define FILE_LENGTH_IDX (CMD_IDX+6)

#define FILE_MODE_PARA 0X01
#define FILE_MODE_RESERVER 0X02
#define FILE_MODE_USER1 0X03
#define FILE_MODE_USER2 0X04
#define FILE_MODE_NEW   0XFF
uint8_t m_packet;	
void Read_Para(file_typedef f1_para,uint8_t *p_packet)
{
	uint8_t bytes;
	uint8_t n_ROM;
	switch(f1_para.mode)
	{
		case FILE_MODE_PARA:
				addr = PARA_BASE;
				if(f1_para.length>size[0])
				n_ROM = PARA_ROM;
			break;
		case FILE_MODE_RESERVER:
				addr = RESERVER_BASE;
				n_ROM = RESERVER_ROM;
			break;
		case FILE_MODE_USER1:
				addr = USER1_BASE;
				n_ROM = USER1_ROM;
			break;
		case FILE_MODE_USER2:
				addr = USER2_BASE;
				n_ROM = USER2_ROM;
			break;
		default:
			break;
	}
	
	if(f1_para.offset< size[0])
		addr += f1_para.offset*bytes;
	else if(FILE_MODE_NEW == f1_para)
		addr += (n_ROM-1)*bytes; 
	else
		wrong;
	nrf_nvm_read_bytes(addr,);
}
void radio_cmd_process(void)
{
	uint8_t cmd;
	if(packet[RADIO_S0_IDX])
	{
		memcpy(m_packet,packet,packet[RADIO_LENGTH_IDX] + 2);
		cmd = m_packet[CMD_IDX];
		switch(cmd)
		{
			case FILE_CMD_READ:
				f_para.mode = m_packet[FILE_MODE_IDX];
				f_para.offset = m_packet[FILE_OFFSET_IDX]<<8|m_packet[FILE_OFFSET_IDX+1];
				f_para.length = m_packet[FILE_LENGTH_IDX];
				Read_Para(type,m_packet);
				break;
			
		}		
	}

}