//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask
{
}

- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x0000000000027225
- (id)requestBody;	// IMP=0x0000000000026e53
- (id)httpMethod;	// IMP=0x0000000000026e46
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3;	// IMP=0x0000000000026d6f

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end
