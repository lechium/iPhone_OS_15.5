//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDictionary;

@protocol PXMutableBrowserSummaryController <NSObject>
@property(copy, nonatomic) NSDictionary *selectionAttributes;
@property(copy, nonatomic) NSDictionary *emphasizedAttributes;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
@property(nonatomic) unsigned long long containerDateFormatGranularity;
@property(nonatomic) _Bool shouldShowLocationNames;
@property(nonatomic) _Bool shouldUseAbbreviatedDates;
@property(nonatomic) _Bool shouldUseNavigationTitle;
@property(nonatomic) _Bool shouldUseSubtitles;
- (void)invalidateFilteringContainerContent;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (void)invalidateContainerDateInterval;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateContainerTitle;
@end

