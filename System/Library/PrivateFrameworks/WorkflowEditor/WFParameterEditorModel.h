//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, WFGradient, WFParameter;
@protocol WFParameterState;

@interface WFParameterEditorModel : NSObject
{
    _Bool _becomeFirstResponder;	// 8 = 0x8
    WFParameter *_parameter;	// 16 = 0x10
    id <WFParameterState> _state;	// 24 = 0x18
    NSError *_resourceError;	// 32 = 0x20
    WFGradient *_buttonGradient;	// 40 = 0x28
    long long _widgetFamily;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000026fbd1
@property(nonatomic) _Bool becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(readonly, nonatomic) long long widgetFamily; // @synthesize widgetFamily=_widgetFamily;
@property(readonly, nonatomic) WFGradient *buttonGradient; // @synthesize buttonGradient=_buttonGradient;
@property(readonly, nonatomic) NSError *resourceError; // @synthesize resourceError=_resourceError;
@property(readonly, nonatomic) id <WFParameterState> state; // @synthesize state=_state;
@property(readonly, nonatomic) WFParameter *parameter; // @synthesize parameter=_parameter;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;	// IMP=0x000000000026fa2f
- (id)initWithParameter:(id)arg1 state:(id)arg2 widgetFamily:(long long)arg3;	// IMP=0x000000000026f8c1
- (id)initWithParameter:(id)arg1 state:(id)arg2;	// IMP=0x000000000026f8a9

@end

