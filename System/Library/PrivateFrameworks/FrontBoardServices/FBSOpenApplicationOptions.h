//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying>
{
    NSMutableDictionary *_payload;	// 8 = 0x8
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x000000000001ae8a
+ (id)optionsWithDictionary:(id)arg1;	// IMP=0x000000000001a9e0
- (void).cxx_destruct;	// IMP=0x000000000001b4d2
@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_payload;
- (void)_updateOption:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001b49c
- (void)_sanitizeAndValidatePayload;	// IMP=0x000000000001b2a3
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001b03c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001afec
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001afd0
- (id)succinctDescription;	// IMP=0x000000000001af80
@property(readonly, copy) NSString *description;
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x000000000001aef9
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x000000000001ae92
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000001ac90
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000001aabd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001aab2
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
