//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFParameter;
@protocol WFPropertyListObject, WFVariableProvider;

@protocol WFVariableSerialization <NSObject>
- (id <WFPropertyListObject>)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id <WFPropertyListObject>)arg1 variableProvider:(id <WFVariableProvider>)arg2 parameter:(WFParameter *)arg3;
@end

