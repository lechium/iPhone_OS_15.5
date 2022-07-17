//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;

@interface HMDMediaDestinationMessageHandler
{
    id <HMDMediaDestinationMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationMessageHandlerDelegate> _delegate;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000007d914a
- (void).cxx_destruct;	// IMP=0x00000000007d8efb
@property __weak id <HMDMediaDestinationMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1;	// IMP=0x00000000007d8aab
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1;	// IMP=0x00000000007d869d
- (unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007d840e
- (id)audioGroupIdentifierInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007d80b7
- (void)handleUpdatedDestination:(id)arg1;	// IMP=0x00000000007d7f89
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007d7c65
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007d7937
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x00000000007d7703
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x00000000007d76de

@end
