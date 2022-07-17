//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVOutputDevice, MRDeviceInfo, MRIDSTransportConnection, NSError, NSString;

@interface MRIDSTransport
{
    MRAVOutputDevice *_outputDevice;	// 16 = 0x10
    MRIDSTransportConnection *_connection;	// 24 = 0x18
    _Bool _shouldUseSystemAuthenticationPrompt;	// 32 = 0x20
    MRDeviceInfo *_deviceInfo;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSString *_sessionUID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000111164
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
- (id)deviceInfo;	// IMP=0x0000000000111142
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x0000000000111132
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x0000000000111122
- (void)_handleDeviceDisconnected:(id)arg1;	// IMP=0x00000000001110c3
- (void)_handleDeviceConnected:(id)arg1;	// IMP=0x0000000000111064
- (id)_generateSessionUID;	// IMP=0x0000000000110fbf
- (void)_synchronized_setSessionUID:(id)arg1;	// IMP=0x0000000000110c6a
- (void)resetWithError:(id)arg1;	// IMP=0x0000000000110b5a
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x0000000000110345
- (id)error;	// IMP=0x00000000001102fb
- (id)uid;	// IMP=0x00000000001102ab
- (long long)port;	// IMP=0x00000000001102a3
- (id)hostname;	// IMP=0x000000000011029b
- (id)name;	// IMP=0x000000000011024b
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x0000000000110035

@end
