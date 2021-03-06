//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface EKVirtualConferenceRoomType : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_extensionBundleIdentifier;	// 24 = 0x18
    NSString *_originatingExtensionIdentifier;	// 32 = 0x20
}

+ (void)virtualConferenceRoomTypesWithCompletion:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000000000d10c9
- (void).cxx_destruct;	// IMP=0x00000000000d211c
@property(readonly, nonatomic) NSString *originatingExtensionIdentifier; // @synthesize originatingExtensionIdentifier=_originatingExtensionIdentifier;
@property(readonly, nonatomic) NSString *extensionBundleIdentifier; // @synthesize extensionBundleIdentifier=_extensionBundleIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00000000000d20bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d1f18
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 extensionBundleIdentifier:(id)arg3;	// IMP=0x00000000000d1012

@end

