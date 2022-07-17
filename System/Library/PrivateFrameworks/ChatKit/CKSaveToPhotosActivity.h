//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class CKMediaObject, UIViewController;

@interface CKSaveToPhotosActivity : UIActivity
{
    CKMediaObject *_mediaObject;	// 8 = 0x8
    UIViewController *_presenterViewController;	// 16 = 0x10
}

+ (long long)activityCategory;	// IMP=0x00000000000fb841
- (void).cxx_destruct;	// IMP=0x00000000000fbbe1
@property(readonly, nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(readonly, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)performActivity;	// IMP=0x00000000000fb94f
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000fb933
- (id)_systemImageName;	// IMP=0x00000000000fb926
- (id)activityTitle;	// IMP=0x00000000000fb849
- (id)activityType;	// IMP=0x00000000000fb834
- (id)initWithMediaObject:(id)arg1 presenterViewController:(id)arg2;	// IMP=0x00000000000fb792

@end
