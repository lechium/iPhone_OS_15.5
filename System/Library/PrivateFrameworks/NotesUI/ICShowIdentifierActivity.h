//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString;

@interface ICShowIdentifierActivity : UIActivity
{
    NSString *_identifier;	// 8 = 0x8
}

+ (long long)activityCategory;	// IMP=0x00000000000c66b5
- (void).cxx_destruct;	// IMP=0x00000000000c66e2
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000c66ad
- (id)activityTitle;	// IMP=0x00000000000c669b
- (id)activityType;	// IMP=0x00000000000c668e
- (id)activityViewController;	// IMP=0x00000000000c6493
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000c642b

@end
