//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSDictionary, SVXButtonEvent, SVXClientInfo, SVXDeactivationOptions;

@protocol SVXDeactivationContextMutating <NSObject>
- (void)setOptions:(SVXDeactivationOptions *)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)setClientInfo:(SVXClientInfo *)arg1;
- (void)setButtonEvent:(SVXButtonEvent *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
@end

