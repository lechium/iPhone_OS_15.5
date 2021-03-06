//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSString, NSURL, NSURLSessionDataTask, RouteCollection, TransitPassManager;
@protocol FeatureDiscoverySourceDelegate;

__attribute__((visibility("hidden")))
@interface TransitPayDiscoverySource : NSObject
{
    _Bool _isUpdatingAvailability;	// 8 = 0x8
    _Bool _dismissedMessage;	// 9 = 0x9
    id <FeatureDiscoverySourceDelegate> _delegate;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    TransitPassManager *_passManager;	// 32 = 0x20
    FeatureDiscoveryModel *_model;	// 40 = 0x28
    long long _transportType;	// 48 = 0x30
    RouteCollection *_routeCollection;	// 56 = 0x38
    NSURL *_iconURL;	// 64 = 0x40
    NSURLSessionDataTask *_urlSessionTask;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000af7328
@property(retain, nonatomic) NSURLSessionDataTask *urlSessionTask; // @synthesize urlSessionTask=_urlSessionTask;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) _Bool dismissedMessage; // @synthesize dismissedMessage=_dismissedMessage;
@property(nonatomic) _Bool isUpdatingAvailability; // @synthesize isUpdatingAvailability=_isUpdatingAvailability;
@property(retain, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) FeatureDiscoveryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TransitPassManager *passManager; // @synthesize passManager=_passManager;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <FeatureDiscoverySourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadIconURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000af6da8
- (void)populateModelWithMessage:(id)arg1 icon:(id)arg2;	// IMP=0x0010000000af6856
- (void)_updateAvailability;	// IMP=0x0010000000af60f6
- (void)transitPassManagerDidChange:(id)arg1;	// IMP=0x0010000000af60e4
- (void)setTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x0010000000af606b
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)initWithPriority:(long long)arg1 delegate:(id)arg2;	// IMP=0x0010000000af5ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

