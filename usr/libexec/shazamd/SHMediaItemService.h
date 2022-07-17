//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SHAttribution, SHServerResponseContextBuilder, SHShazamServiceURLBuilder;
@protocol SHNetworkRecognitionRequester, SHServiceDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaItemService : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
    SHShazamServiceURLBuilder *_URLBuilder;	// 24 = 0x18
    SHServerResponseContextBuilder *_contextBuilder;	// 32 = 0x20
    SHAttribution *_attribution;	// 40 = 0x28
    id <SHNetworkRecognitionRequester> _networkRequester;	// 48 = 0x30
    MISSING_TYPE *_clientType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000021b87
@property(readonly, nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) id <SHNetworkRecognitionRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) SHServerResponseContextBuilder *contextBuilder; // @synthesize contextBuilder=_contextBuilder;
@property(readonly, nonatomic) SHShazamServiceURLBuilder *URLBuilder; // @synthesize URLBuilder=_URLBuilder;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (double)timeRequiredToPerformWork;	// IMP=0x0010000000021b14
- (oneway void)stop;	// IMP=0x0010000000021b0e
- (id)requiredEntitlements;	// IMP=0x0010000000021b01
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000211de
- (id)initWithAttribution:(id)arg1 clientType:(long long)arg2;	// IMP=0x00100000000210c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
