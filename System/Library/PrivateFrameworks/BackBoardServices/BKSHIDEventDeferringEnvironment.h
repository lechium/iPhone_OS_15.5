//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (id)protobufSchema;	// IMP=0x0000000000003c19
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003c11
+ (id)environmentWithIdentifier:(id)arg1;	// IMP=0x000000000000391f
+ (id)keyboardFocusEnvironment;	// IMP=0x00000000000038ef
+ (id)systemEnvironment;	// IMP=0x00000000000038bf
- (void).cxx_destruct;	// IMP=0x00000000000038af
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003836
@property(readonly) unsigned long long hash;
- (id)initForProtobufDecoding;	// IMP=0x00000000000037f1
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000036de
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000000368c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003572
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000354f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003544
- (_Bool)_isKeyboardFocusEnvironment;	// IMP=0x0000000000003527
- (_Bool)_isSystemEnvironment;	// IMP=0x000000000000350a
- (id)_initWithIdentifier:(id)arg1;	// IMP=0x0000000000003330
- (id)init;	// IMP=0x0000000000003202

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
