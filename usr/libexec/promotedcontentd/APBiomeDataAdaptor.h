//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APBiomeDataAdaptor
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000059b8
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)eventReceived:(id)arg1;	// IMP=0x0010000000005990
- (id)calculateResultFromEvents;	// IMP=0x0010000000005988
- (id)createStreamWithStartDate:(id)arg1;	// IMP=0x0010000000005980
- (void)completed:(id)arg1;	// IMP=0x00100000000058f7
- (void)_run:(CDUnknownBlockType)arg1;	// IMP=0x001000000000558a

@end

