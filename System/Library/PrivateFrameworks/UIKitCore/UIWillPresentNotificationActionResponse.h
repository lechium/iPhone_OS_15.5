//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSActionResponse.h>

@interface UIWillPresentNotificationActionResponse : BSActionResponse
{
}

+ (id)responseWithOptions:(unsigned long long)arg1;	// IMP=0x000000000072109c
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000007211fe
@property(readonly, nonatomic) unsigned long long options;
- (id)initWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x0000000000721177
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000007210cb

@end

