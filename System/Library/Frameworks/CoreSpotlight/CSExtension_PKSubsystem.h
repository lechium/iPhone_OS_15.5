//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/PKModularService-Protocol.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>
{
}

+ (id)initForPlugInKit;	// IMP=0x0000000000023dae
+ (id)sharedInstance;	// IMP=0x0000000000023d21
- (void)endUsing:(id)arg1;	// IMP=0x0000000000023cbf
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;	// IMP=0x0000000000023b2b
- (id)principleClassFromDictionary:(id)arg1;	// IMP=0x0000000000023aa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

