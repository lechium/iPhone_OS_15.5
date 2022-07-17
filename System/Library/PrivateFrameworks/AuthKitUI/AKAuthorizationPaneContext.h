//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationPaneViewController, NSMutableArray, UIStackView;

@interface AKAuthorizationPaneContext : NSObject
{
    AKAuthorizationPaneViewController *_paneViewController;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    NSMutableArray *_internalMutableConstraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000292c6
@property(retain, nonatomic) NSMutableArray *internalMutableConstraints; // @synthesize internalMutableConstraints=_internalMutableConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) AKAuthorizationPaneViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
- (void)addEmptyViewWithSpacing:(double)arg1;	// IMP=0x00000000000291ed
- (void)addSubPane:(id)arg1;	// IMP=0x0000000000029147
@property(readonly, nonatomic) NSMutableArray *mutableConstraints;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;	// IMP=0x0000000000029068
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;	// IMP=0x0000000000028fcf

@end
