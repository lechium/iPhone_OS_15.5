//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    _Bool _contentFullscreen;	// 8 = 0x8
    double _contentWidth;	// 16 = 0x10
    double _searchBarTopOffset;	// 24 = 0x18
    double _firstWidgetTopOffset;	// 32 = 0x20
    struct NSDirectionalEdgeInsets _insets;	// 40 = 0x28
}

@property(nonatomic) struct NSDirectionalEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic, getter=isContentFullscreen) _Bool contentFullscreen; // @synthesize contentFullscreen=_contentFullscreen;
@property(nonatomic) double firstWidgetTopOffset; // @synthesize firstWidgetTopOffset=_firstWidgetTopOffset;
@property(nonatomic) double searchBarTopOffset; // @synthesize searchBarTopOffset=_searchBarTopOffset;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f2481
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f2431
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000f2415
- (id)succinctDescription;	// IMP=0x00000000000f23c5
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f2268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f2212
- (double)effectiveContentWidthWithContainerWidth:(double)arg1;	// IMP=0x00000000000f219a
- (id)init;	// IMP=0x00000000000f2158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

