//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFParameter;
@protocol WFParameterState, WFParameterValuePickable;

@interface WFParameterValueWrapper : NSObject
{
    id <WFParameterState> _value;	// 8 = 0x8
    WFParameter<WFParameterValuePickable> *_parameter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002380b3
@property(readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) id <WFParameterState> value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *readableTitle;
- (id)initWithValue:(id)arg1 parameter:(id)arg2;	// IMP=0x0000000000237e84

@end

