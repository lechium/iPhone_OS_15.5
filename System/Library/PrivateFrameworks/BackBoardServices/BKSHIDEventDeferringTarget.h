//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying>
{
    int _pid;	// 8 = 0x8
    BKSHIDEventDeferringToken *_token;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000abd6
+ (id)protobufSchema;	// IMP=0x000000000000ab73
- (void).cxx_destruct;	// IMP=0x000000000000a5b1
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000000a50c
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a422
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a103
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a091
- (id)initForProtobufDecoding;	// IMP=0x000000000000a062
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a026
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a01b
- (id)_initWithPID:(int)arg1 token:(id)arg2;	// IMP=0x0000000000009b9e
- (id)init;	// IMP=0x0000000000009a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

