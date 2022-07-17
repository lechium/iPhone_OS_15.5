//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHContentEditingOutputRequestOptions : NSObject
{
    _Bool _asyncAdjustment;	// 8 = 0x8
    _Bool _onlyChangingOriginalChoice;	// 9 = 0x9
    _Bool _preferHEICForRenderedImages;	// 10 = 0xa
    long long _playbackStyle;	// 16 = 0x10
}

@property(nonatomic) _Bool preferHEICForRenderedImages; // @synthesize preferHEICForRenderedImages=_preferHEICForRenderedImages;
@property(nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(nonatomic, getter=isOnlyChangingOriginalChoice) _Bool onlyChangingOriginalChoice; // @synthesize onlyChangingOriginalChoice=_onlyChangingOriginalChoice;
@property(nonatomic, getter=isAsyncAdjustment) _Bool asyncAdjustment; // @synthesize asyncAdjustment=_asyncAdjustment;
- (id)description;	// IMP=0x00000000001ac58f

@end
