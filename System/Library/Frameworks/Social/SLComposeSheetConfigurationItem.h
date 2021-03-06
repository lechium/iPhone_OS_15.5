//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SLComposeSheetConfigurationItemObserving;

@interface SLComposeSheetConfigurationItem : NSObject
{
    id <SLComposeSheetConfigurationItemObserving> _changeObserver;	// 8 = 0x8
    _Bool _valuePending;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_value;	// 32 = 0x20
    CDUnknownBlockType _tapHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000307b9
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic) _Bool valuePending; // @synthesize valuePending=_valuePending;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setChangeObserver:(id)arg1;	// IMP=0x0000000000030772
- (id)changeObserver;	// IMP=0x000000000003075c
- (id)init;	// IMP=0x00000000000305f4

@end

