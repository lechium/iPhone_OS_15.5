//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSLocalDraftsDeviceManagerType-Protocol.h>

@class MISSING_TYPE;
@protocol TSLocalDraftsDelegate;

@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType>
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000bd8990
- (id)init;	// IMP=0x0000000000bd88c0
@property(nonatomic) __weak id <TSLocalDraftsDelegate> delegate; // @synthesize delegate;

@end

