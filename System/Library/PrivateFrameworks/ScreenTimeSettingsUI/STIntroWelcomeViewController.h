//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STIntroWelcomeViewController : OBWelcomeController
{
    NSString *_childName;	// 8 = 0x8
    CDUnknownBlockType _continueHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000681cf
@property(readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly, copy) NSString *childName; // @synthesize childName=_childName;
- (void)_continue:(id)arg1;	// IMP=0x0000000000068170
- (void)loadView;	// IMP=0x0000000000067dab
- (id)initWithChildName:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067b97

@end

