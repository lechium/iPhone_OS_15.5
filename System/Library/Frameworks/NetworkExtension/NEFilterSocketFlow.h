//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, NWEndpoint;

@interface NEFilterSocketFlow <NSSecureCoding, NSCopying>
{
    long long _generateIdentifierOnce;	// 136 = 0x88
    int _socketFamily;	// 144 = 0x90
    int _socketType;	// 148 = 0x94
    int _socketProtocol;	// 152 = 0x98
    NWEndpoint *_remoteEndpoint;	// 160 = 0xa0
    NSString *_remoteHostname;	// 168 = 0xa8
    NWEndpoint *_localEndpoint;	// 176 = 0xb0
    NSUUID *_uuid;	// 184 = 0xb8
    NSUUID *_euuid;	// 192 = 0xc0
    unsigned long long _socketID;	// 200 = 0xc8
    NSUUID *_socketUUID;	// 208 = 0xd0
}

+ (_Bool)writeMessageWithControlSocket:(int)arg1 drop:(_Bool)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8;	// IMP=0x000000000006103b
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005f937
- (void).cxx_destruct;	// IMP=0x00000000000612b5
@property(readonly) NSUUID *socketUUID; // @synthesize socketUUID=_socketUUID;
@property unsigned long long socketID; // @synthesize socketID=_socketID;
@property(copy, nonatomic) NSUUID *euuid; // @synthesize euuid=_euuid;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property int socketProtocol; // @synthesize socketProtocol=_socketProtocol;
@property int socketType; // @synthesize socketType=_socketType;
@property int socketFamily; // @synthesize socketFamily=_socketFamily;
@property(copy) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(copy) NSString *remoteHostname; // @synthesize remoteHostname=_remoteHostname;
@property(copy) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
- (void)writeXPCMessage:(id)arg1 drop:(_Bool)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7;	// IMP=0x0000000000060dcf
- (void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2;	// IMP=0x0000000000060af5
- (_Bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x0000000000060a2c
- (_Bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x00000000000609bb
- (_Bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;	// IMP=0x00000000000604cd
- (id)identifierString;	// IMP=0x0000000000060431
- (id)identifier;	// IMP=0x00000000000602e2
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000060007
- (void)setLocalAddress:(struct sockaddr *)arg1;	// IMP=0x000000000005ffa4
- (void)setRemoteAddress:(struct sockaddr *)arg1;	// IMP=0x000000000005ff41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fd95
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005fb99
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f93f
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char [16])arg6 euuid:(unsigned char [16])arg7 socketID:(unsigned long long)arg8;	// IMP=0x000000000005f7ee

@end

