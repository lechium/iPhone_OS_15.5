//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUEditActionActivity : UIActivity
{
    NSString *_actionName;	// 8 = 0x8
    NSString *_systemImageName;	// 16 = 0x10
    CDUnknownBlockType _performActivityActionHandler;	// 24 = 0x18
    CDUnknownBlockType _canPerformActivityActionHandler;	// 32 = 0x20
    NSString *_internalActivityType;	// 40 = 0x28
    CDUnknownBlockType _activityBlock;	// 48 = 0x30
}

+ (long long)activityCategory;	// IMP=0x00000000000bcc82
- (void).cxx_destruct;	// IMP=0x00000000000bcc0d
@property(copy, nonatomic) CDUnknownBlockType activityBlock; // @synthesize activityBlock=_activityBlock;
@property(retain, nonatomic) NSString *internalActivityType; // @synthesize internalActivityType=_internalActivityType;
@property(copy, nonatomic) CDUnknownBlockType canPerformActivityActionHandler; // @synthesize canPerformActivityActionHandler=_canPerformActivityActionHandler;
@property(copy, nonatomic) CDUnknownBlockType performActivityActionHandler; // @synthesize performActivityActionHandler=_performActivityActionHandler;
@property(copy, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (void)performActivity;	// IMP=0x00000000000bcac0
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000bca31
- (id)_systemImageName;	// IMP=0x00000000000bca1f
- (id)activityTitle;	// IMP=0x00000000000bca0a
- (id)activityType;	// IMP=0x00000000000bc9f5
- (id)initWithActionName:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3;	// IMP=0x00000000000bc90c

@end
