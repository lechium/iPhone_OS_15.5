//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HSNFCManagerDelegate;

@interface HSNFCManager : NSObject
{
    id <HSNFCManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003f835
@property(nonatomic) __weak id <HSNFCManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)readerSupportedWithError:(id *)arg1;	// IMP=0x001000000003f806
- (void)stop;	// IMP=0x001000000003f800
- (id)start;	// IMP=0x001000000003f758
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000003f6f4

@end

