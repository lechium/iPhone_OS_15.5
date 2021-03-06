//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUILibraryMetrics : NSObject
{
}

+ (id)pageStringForLibraryCategoryType:(long long)arg1;	// IMP=0x000000000000d348
+ (id)pageStringForLibraryShelfType:(long long)arg1;	// IMP=0x000000000000d2f4
+ (id)pageStringForLibraryCellType:(long long)arg1;	// IMP=0x000000000000d285
+ (id)getMediaEntityContentType:(id)arg1;	// IMP=0x000000000000d232
+ (id)getMediaItemContentType:(id)arg1;	// IMP=0x000000000000d1df
+ (id)pageStringForEntityType:(id)arg1;	// IMP=0x000000000000d1ca
+ (void)recordPageEventWithPageId:(id)arg1 andPageType:(id)arg2;	// IMP=0x000000000000d096
+ (void)recordPageEventWithPageType:(id)arg1;	// IMP=0x000000000000d081
+ (void)recordClickOnMediaEntity:(id)arg1;	// IMP=0x000000000000cf85
+ (void)recordPlayOfMediaItem:(id)arg1;	// IMP=0x000000000000ce45
+ (void)recordPlayOfMediaEntity:(id)arg1 isLaunchingExtras:(_Bool)arg2;	// IMP=0x000000000000ccf8

@end

