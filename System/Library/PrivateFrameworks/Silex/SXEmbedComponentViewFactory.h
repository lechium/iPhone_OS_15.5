//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewFactory-Protocol.h>

@class NSString;
@protocol TFResolver;

@interface SXEmbedComponentViewFactory : NSObject <SXComponentViewFactory>
{
    id <TFResolver> _resolver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b4ba7
@property(readonly, nonatomic) id <TFResolver> resolver; // @synthesize resolver=_resolver;
- (id)componentViewForComponent:(id)arg1;	// IMP=0x00000000000b4aab
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithResolver:(id)arg1;	// IMP=0x00000000000b4a19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
