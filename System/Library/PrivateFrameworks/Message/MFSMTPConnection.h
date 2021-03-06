//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFSMTPResponse, NSMutableArray, NSMutableData, NSString;

@interface MFSMTPConnection
{
    MFSMTPResponse *_lastResponse;	// 112 = 0x70
    NSMutableArray *_serviceExtensions;	// 120 = 0x78
    NSMutableData *_mdata;	// 128 = 0x80
    NSString *_domainName;	// 136 = 0x88
    NSString *_saveSentMbox;	// 144 = 0x90
    int _originalSocketTimeout;	// 152 = 0x98
    long long _lastCommandTimestamp;	// 160 = 0xa0
    id _delegate;	// 168 = 0xa8
    _Bool _hideLoggedData;	// 176 = 0xb0
    _Bool _useSaveSent;	// 177 = 0xb1
    _Bool _dislikesSaveSentMbox;	// 178 = 0xb2
}

+ (id)log;	// IMP=0x000000000014d8d5
- (void).cxx_destruct;	// IMP=0x00000000001532f3
- (void)setUseSaveSent:(_Bool)arg1 toFolder:(id)arg2;	// IMP=0x000000000015325d
- (_Bool)_supportsSaveSentExtension;	// IMP=0x0000000000153244
- (id)lastResponseLine;	// IMP=0x0000000000153121
- (void)_setLastResponse:(id)arg1;	// IMP=0x000000000015310d
- (_Bool)_supportsExtension:(id)arg1;	// IMP=0x0000000000152ffc
- (_Bool)_hasParameter:(id)arg1 forKeyword:(id)arg2;	// IMP=0x0000000000152e24
- (int)_doHandshakeUsingAccount:(id)arg1;	// IMP=0x0000000000152411
- (_Bool)_connectUsingAccount:(id)arg1;	// IMP=0x00000000001520d7
- (int)_readResponseRange:(struct _NSRange *)arg1 isContinuation:(_Bool *)arg2;	// IMP=0x0000000000151cf5
- (int)_getReply;	// IMP=0x00000000001519a3
- (int)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;	// IMP=0x00000000001518af
- (id)_dataForCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;	// IMP=0x0000000000151763
- (int)_sendData:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001516ab
- (int)_sendData:(id)arg1;	// IMP=0x0000000000151623
- (int)_sendBytes:(const char *)arg1 length:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001514f0
- (long long)timeLastCommandWasSent;	// IMP=0x00000000001514df
- (long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 emailFormatStyle:(long long)arg5 errorTitle:(id *)arg6 errorMessage:(id *)arg7 serverResponse:(id *)arg8 displayError:(_Bool *)arg9 errorCode:(int *)arg10 errorUserInfo:(id *)arg11;	// IMP=0x000000000014fcae
- (id)dataForDataCmd;	// IMP=0x000000000014fc8a
- (id)dataForRcptTo:(id)arg1;	// IMP=0x000000000014fc52
- (id)dataForMailFrom:(id)arg1 emailFormatStyle:(long long)arg2;	// IMP=0x000000000014fbc7
- (int)mailFrom:(id)arg1 emailFormatStyle:(long long)arg2;	// IMP=0x000000000014fb31
- (const char *)_trailerForMailFromWithEmailAddressFormatStyle:(long long)arg1;	// IMP=0x000000000014fb16
- (void)abort;	// IMP=0x000000000014fb04
- (int)quit;	// IMP=0x000000000014fabd
- (int)sendData:(id)arg1;	// IMP=0x000000000014f3d3
- (int)sendBData:(id)arg1;	// IMP=0x000000000014ee56
- (int)noop;	// IMP=0x000000000014ee0c
- (int)rcptTo:(id)arg1;	// IMP=0x000000000014ed8a
- (_Bool)connectUsingAccount:(id)arg1;	// IMP=0x000000000014e833
- (_Bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;	// IMP=0x000000000014e0d3
- (_Bool)authenticateUsingAccount:(id)arg1;	// IMP=0x000000000014e03d
- (id)authenticationMechanisms;	// IMP=0x000000000014dea4
- (unsigned long long)maximumMessageBytes;	// IMP=0x000000000014dc66
- (_Bool)supportsChunking;	// IMP=0x000000000014dbe5
- (_Bool)supportsEnhancedStatusCodes;	// IMP=0x000000000014dbcc
- (_Bool)supportsSMTPUTF8;	// IMP=0x000000000014dbb3
- (_Bool)supportsPipelining;	// IMP=0x000000000014db9a
- (_Bool)supportsOutboxCopy;	// IMP=0x000000000014db47
- (void)setDomainName:(id)arg1;	// IMP=0x000000000014dae9
- (id)domainName;	// IMP=0x000000000014dad4
- (id)lastResponse;	// IMP=0x000000000014daaf
- (int)state;	// IMP=0x000000000014da6b
- (void)setDelegate:(id)arg1;	// IMP=0x000000000014da57
- (id)init;	// IMP=0x000000000014d9b2

@end

