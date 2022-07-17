//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSString *_desc;	// 8 = 0x8
    unsigned long long _hash;	// 16 = 0x10
    int _serverPid;	// 24 = 0x18
    int _clientPid;	// 28 = 0x1c
    unsigned long long _count;	// 32 = 0x20
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x000000000000f15b
+ (id)identifierWithClientPid:(int)arg1;	// IMP=0x000000000000ef91
- (void).cxx_destruct;	// IMP=0x000000000000f3b4
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) int serverPid; // @synthesize serverPid=_serverPid;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f27e
@property(readonly) unsigned long long hash;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000f1e6
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000f163
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f150
- (id)init;	// IMP=0x000000000000f0c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
