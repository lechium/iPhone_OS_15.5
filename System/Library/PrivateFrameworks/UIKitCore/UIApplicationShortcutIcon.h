//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSXPCCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>
{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;	// 8 = 0x8
}

+ (id)iconWithCustomImage:(id)arg1 isTemplate:(_Bool)arg2;	// IMP=0x00000000000bf2b0
+ (id)iconWithCustomImage:(id)arg1;	// IMP=0x00000000000bf29c
+ (id)iconWithTemplateImageName:(id)arg1;	// IMP=0x00000000000bf17e
+ (id)iconWithSystemImageName:(id)arg1;	// IMP=0x00000000000bf060
+ (id)iconWithType:(long long)arg1;	// IMP=0x00000000000beea4
- (void).cxx_destruct;	// IMP=0x00000000000bf71a
@property(readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // @synthesize sbsShortcutIcon=_sbsShortcutIcon;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000bf5f3
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000bf5d8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bf4da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf4cf
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;	// IMP=0x00000000000bf464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
