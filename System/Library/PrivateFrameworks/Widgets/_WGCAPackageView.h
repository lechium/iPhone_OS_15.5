//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UICAPackageView.h>

@class NSString, NSURL;

@interface _WGCAPackageView : _UICAPackageView
{
    NSURL *_archiveURL;	// 8 = 0x8
}

+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000372a2
- (void).cxx_destruct;	// IMP=0x00000000000379fe
@property(copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
- (id)description;	// IMP=0x0000000000037954
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000376f0
- (_Bool)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1;	// IMP=0x0000000000037452
@property(readonly, copy, nonatomic) NSString *snapshotIdentifier;

@end
