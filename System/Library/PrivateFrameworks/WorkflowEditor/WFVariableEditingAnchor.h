//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFParameter, WFVariable;
@protocol WFVariableProvider;

@interface WFVariableEditingAnchor : NSObject
{
    WFVariable *_variable;	// 8 = 0x8
    id <WFVariableProvider> _variableProvider;	// 16 = 0x10
    WFParameter *_parameter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025a1e7
@property(readonly, nonatomic) WFParameter *parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025a05b
- (unsigned long long)hash;	// IMP=0x000000000025a001
- (id)initWithVariable:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x0000000000259dcb

@end

