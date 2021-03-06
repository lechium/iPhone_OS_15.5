//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHAddWidgetSheetGalleryItem-Protocol.h>

@class NSArray, NSString, UIColor;

@interface SBHWidgetStackDescriptor : NSObject <SBHAddWidgetSheetGalleryItem>
{
    NSString *_sbh_galleryItemIdentifier;	// 8 = 0x8
    NSArray *_smallStackDescriptors;	// 16 = 0x10
    NSArray *_mediumStackDescriptors;	// 24 = 0x18
    NSArray *_largeStackDescriptors;	// 32 = 0x20
    NSArray *_extraLargeStackDescriptors;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000021cdfe
@property(retain, nonatomic) NSArray *extraLargeStackDescriptors; // @synthesize extraLargeStackDescriptors=_extraLargeStackDescriptors;
@property(retain, nonatomic) NSArray *largeStackDescriptors; // @synthesize largeStackDescriptors=_largeStackDescriptors;
@property(retain, nonatomic) NSArray *mediumStackDescriptors; // @synthesize mediumStackDescriptors=_mediumStackDescriptors;
@property(retain, nonatomic) NSArray *smallStackDescriptors; // @synthesize smallStackDescriptors=_smallStackDescriptors;
@property(readonly, copy, nonatomic) UIColor *mostInterestingColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor;
@property(readonly, copy, nonatomic) UIColor *accentColor;
@property(readonly, copy, nonatomic) NSString *sbh_galleryItemIdentifier; // @synthesize sbh_galleryItemIdentifier=_sbh_galleryItemIdentifier;
@property(readonly, copy, nonatomic) NSString *sbh_widgetDescription;
@property(readonly, copy, nonatomic) NSString *sbh_widgetName;
@property(readonly, copy, nonatomic) NSString *sbh_appName;
@property(readonly, nonatomic) _Bool sbh_canBeAddedToStack;
@property(readonly, nonatomic) unsigned long long sbh_supportedSizeClasses;
- (id)descriptorsForSizeClass:(long long)arg1;	// IMP=0x000000000021cad1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021c83f
- (id)initWithSmallStackDescriptors:(id)arg1 mediumStackDescriptors:(id)arg2 largeStackDescriptors:(id)arg3 extraLargeStackDescriptors:(id)arg4;	// IMP=0x000000000021c732

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

