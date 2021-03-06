//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMDClient : NSObject
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    NSString *_dsId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045920
@property(retain, nonatomic) NSString *dsId; // @synthesize dsId=_dsId;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)callIAESegmentNotificationHandler;	// IMP=0x0000000000045810
- (void)unsubscribeFromSegmentNotification;	// IMP=0x00000000000457a0
- (void)subscribeToSegmentNotificationWithCallback:(CDUnknownBlockType)arg1 forAccountDSID:(id)arg2;	// IMP=0x0000000000045550
- (void)iaeSegmentNotificationHandler:(id)arg1;	// IMP=0x0000000000044810
- (void)fetchAppSegments:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043f30
- (id)appSegmentData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043ec0
- (void)getAppSegmentDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043e50
- (void)clearDataForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043950
- (id)getFeature:(id)arg1;	// IMP=0x0000000000043580
- (id)getFeatureStub:(id)arg1;	// IMP=0x00000000000428c0

@end

