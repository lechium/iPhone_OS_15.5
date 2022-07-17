//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ICLaunchConfiguration : NSObject
{
    _Bool _resetsCloud;	// 8 = 0x8
    _Bool _resetsContainer;	// 9 = 0x9
    _Bool _resetsState;	// 10 = 0xa
    unsigned long long _environment;	// 16 = 0x10
    NSString *_container;	// 24 = 0x18
    NSString *_localAccountArchiveName;	// 32 = 0x20
    NSString *_cloudAccountArchiveName;	// 40 = 0x28
}

+ (id)userInterfaceTesting;	// IMP=0x000000000001c99f
+ (id)currentConfiguration;	// IMP=0x000000000001c8dc
+ (id)nonDefaultValueForValue:(id)arg1;	// IMP=0x000000000001c88e
- (void).cxx_destruct;	// IMP=0x000000000001cf4e
@property(copy, nonatomic) NSString *cloudAccountArchiveName; // @synthesize cloudAccountArchiveName=_cloudAccountArchiveName;
@property(copy, nonatomic) NSString *localAccountArchiveName; // @synthesize localAccountArchiveName=_localAccountArchiveName;
@property(nonatomic) _Bool resetsState; // @synthesize resetsState=_resetsState;
@property(nonatomic) _Bool resetsContainer; // @synthesize resetsContainer=_resetsContainer;
@property(nonatomic) _Bool resetsCloud; // @synthesize resetsCloud=_resetsCloud;
@property(copy, nonatomic) NSString *container; // @synthesize container=_container;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSArray *launchArguments;
- (id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2 resetsContainer:(_Bool)arg3 resetsCloud:(_Bool)arg4 resetsState:(_Bool)arg5 localAccountArchive:(id)arg6 cloudAccountArchive:(id)arg7;	// IMP=0x000000000001c7ac
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001c535

@end
