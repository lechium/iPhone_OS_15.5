//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>

@class NSString, NSUUID;

@interface EFDevice : NSObject <EFLoggable>
{
    _Bool _isInternal;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

+ (void)executeWithDeviceIsExternal:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a21a
+ (void)executeWithDeviceIsInternal:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009f38
+ (id)testingDeviceWithInternal:(_Bool)arg1;	// IMP=0x0000000000009bb4
+ (id)currentDevice;	// IMP=0x0000000000009b4f
+ (void)setCurrentDevice:(id)arg1;	// IMP=0x0000000000009ae6
+ (id)log;	// IMP=0x0000000000009a09
- (void).cxx_destruct;	// IMP=0x000000000000a24f
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(readonly) _Bool isRunningNative;
- (_Bool)isAppleSilicon;	// IMP=0x0000000000009ee6
- (_Bool)isPlatform:(long long)arg1;	// IMP=0x0000000000009edb
@property(readonly) NSString *platformName;
- (id)_init;	// IMP=0x0000000000009c6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
