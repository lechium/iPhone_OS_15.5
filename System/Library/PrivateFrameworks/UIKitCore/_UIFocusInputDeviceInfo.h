//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSXPCCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface _UIFocusInputDeviceInfo : NSObject <NSCopying, BSXPCCoding>
{
    unsigned long long _senderID;	// 8 = 0x8
}

+ (id)infoWithSenderID:(unsigned long long)arg1;	// IMP=0x000000000069046b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000690463
@property(readonly, nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000690653
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006905e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006905b3
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000069053b
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000006904d7
- (id)_initWithSenderID:(unsigned long long)arg1;	// IMP=0x000000000069049a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
