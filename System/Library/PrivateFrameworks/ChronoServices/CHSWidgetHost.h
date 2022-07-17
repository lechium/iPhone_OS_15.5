//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHSWidgetConfiguration, NSString;
@protocol CHSChronoWidgetServiceServer;

@interface CHSWidgetHost : NSObject
{
    id <CHSChronoWidgetServiceServer> _server;	// 8 = 0x8
    _Bool _invalid;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    CHSWidgetConfiguration *_configuration;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000000000e6cc
- (void).cxx_destruct;	// IMP=0x000000000000ec0d
@property(copy, nonatomic) CHSWidgetConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;	// IMP=0x000000000000eb1e
- (void)invalidate;	// IMP=0x000000000000eafd
- (id)initWithIdentifier:(id)arg1 server:(id)arg2;	// IMP=0x000000000000e893
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000e7fe
- (id)init;	// IMP=0x000000000000e75d

@end
