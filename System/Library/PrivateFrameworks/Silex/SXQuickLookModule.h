//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookModule-Protocol.h>

@class NSString;
@protocol TFResolver;

@interface SXQuickLookModule : NSObject <SXQuickLookModule>
{
    id <TFResolver> _resolver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012156e
@property(readonly, nonatomic) id <TFResolver> resolver; // @synthesize resolver=_resolver;
- (id)createViewControllerWithFile:(id)arg1;	// IMP=0x0000000000121434
- (id)initWithResolver:(id)arg1;	// IMP=0x00000000001213c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

