//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperSettingsFetchOperation
{
    VSOptional *_result;	// 8 = 0x8
    VSDeveloperServiceConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e3a2
@property(retain, nonatomic) VSDeveloperServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;	// IMP=0x000000000001dfe2
- (id)init;	// IMP=0x000000000001deba

@end

