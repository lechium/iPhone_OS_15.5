//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/WFVariableDelegate-Protocol.h>

@class WFCustomButtonComponent;
@protocol WFVariableUIDelegate;

@interface WFVariableComponent <WFVariableDelegate>
{
    id <WFVariableUIDelegate> _variableUIDelegate;	// 8 = 0x8
    WFCustomButtonComponent *_buttonComponent;	// 16 = 0x10
    CDUnknownBlockType _updateBlock;	// 24 = 0x18
}

+ (id)newWithVariable:(id)arg1 variableUIDelegate:(id)arg2 resultType:(unsigned long long)arg3 editable:(_Bool)arg4 updateBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d96e6
- (void).cxx_destruct;	// IMP=0x00000000002da20f
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) __weak WFCustomButtonComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
- (void)variableDidChange:(id)arg1;	// IMP=0x00000000002da1b1
- (void)variableDidClear:(id)arg1;	// IMP=0x00000000002da192
- (void)variableDidUpdate:(id)arg1;	// IMP=0x00000000002da0c8

@end
