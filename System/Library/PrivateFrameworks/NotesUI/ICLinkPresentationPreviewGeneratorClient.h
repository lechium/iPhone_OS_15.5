//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ICLinkPresentationPreviewGeneratorClient : NSObject
{
    NSXPCConnection *_connectionToService;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000088616
- (void).cxx_destruct;	// IMP=0x0000000000088d53
@property(retain, nonatomic) NSXPCConnection *connectionToService; // @synthesize connectionToService=_connectionToService;
- (struct CGSize)drawPreviewStartingAtPoint:(struct CGPoint)arg1 attachment:(id)arg2 insideSystemPaper:(_Bool)arg3;	// IMP=0x00000000000887f0
- (id)init;	// IMP=0x000000000008866b

@end

