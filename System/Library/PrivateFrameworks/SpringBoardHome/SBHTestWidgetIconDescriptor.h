//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHTestWidgetIconDescriptor-Protocol.h>

@class NSString;

@interface SBHTestWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_containerBundleIdentifier;	// 16 = 0x10
    NSString *_widgetIdentifier;	// 24 = 0x18
    unsigned long long _sizeClass;	// 32 = 0x20
}

+ (id)widgetIconDescriptorFromDictionary:(id)arg1;	// IMP=0x0000000000093cdb
- (void).cxx_destruct;	// IMP=0x0000000000094300
@property(readonly, nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(readonly, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(readonly, nonatomic) NSString *containerBundleIdentifier; // @synthesize containerBundleIdentifier=_containerBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)sbh_iconDescriptorType;	// IMP=0x00000000000942cd
- (_Bool)sbh_isValidWithError:(id *)arg1;	// IMP=0x00000000000942c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094172
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009411d
- (id)init;	// IMP=0x0000000000094068
- (id)initWithBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 widgetIdentifier:(id)arg3 sizeClass:(unsigned long long)arg4;	// IMP=0x0000000000093dee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
