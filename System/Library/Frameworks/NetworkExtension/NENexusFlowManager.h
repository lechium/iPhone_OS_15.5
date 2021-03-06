//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject
{
    NSObject<OS_nw_channel> *_kernelChannel;	// 8 = 0x8
    struct nw_protocol *_protocol;	// 16 = 0x10
    struct nw_protocol *_defaultInputProtocol;	// 24 = 0x18
    NSMutableDictionary *_userChannels;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000144207
@property(retain) NSMutableDictionary *userChannels; // @synthesize userChannels=_userChannels;
@property struct nw_protocol *defaultInputProtocol; // @synthesize defaultInputProtocol=_defaultInputProtocol;
@property struct nw_protocol *protocol; // @synthesize protocol=_protocol;
@property(retain) NSObject<OS_nw_channel> *kernelChannel; // @synthesize kernelChannel=_kernelChannel;
- (void)dealloc;	// IMP=0x000000000014407e

@end

