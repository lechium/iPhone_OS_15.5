//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INWatchdogTimer, NSArray, NSError, NSExtension, NSOperationQueue, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject
{
    NSUUID *_requestIdentifier;	// 8 = 0x8
    INWatchdogTimer *_contextTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSOperationQueue *_requestOperationQueue;	// 32 = 0x20
    _Bool _requiresTCC;	// 40 = 0x28
    NSExtension *_extension;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    NSArray *_extensionInputItems;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x0000000000002bf4
- (void).cxx_destruct;	// IMP=0x0000000000002299
@property(nonatomic) _Bool requiresTCC; // @synthesize requiresTCC=_requiresTCC;
@property(retain, nonatomic) NSArray *extensionInputItems; // @synthesize extensionInputItems=_extensionInputItems;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setError:) NSError *_error; // @synthesize _error;
@property(retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // @synthesize _extension;
- (void)_scheduleContextTimer;	// IMP=0x0000000000002135
- (void)_resetContextTimer;	// IMP=0x0000000000002103
- (void)_resetExtensionContextHostWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000202f
- (id)_extensionContextHost;	// IMP=0x0000000000001ef6
- (id)_requestOperationQueue;	// IMP=0x0000000000001ea5
- (void)reset;	// IMP=0x0000000000001e5a
- (void)startRequestForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001d97
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000001c50

@end

