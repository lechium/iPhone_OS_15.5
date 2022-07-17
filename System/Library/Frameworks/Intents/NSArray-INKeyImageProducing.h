//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentResolutionResultDataProviding-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>

@class INImage, NSString;

@interface NSArray (INKeyImageProducing) <INKeyImageProducing, INCacheableContainer, INJSONSerializable, INImageProxyInjecting, INCodableAttributeRelationComparing, INIntentResolutionResultDataProviding>
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x0000000000053b39
@property(readonly) INImage *_keyImage;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x0000000000088364
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000087dab
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00000000000b98f7
- (id)_intents_cacheableObjects;	// IMP=0x00000000000b9698
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000012cc12
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020da7e
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x000000000028e084
- (id)_intents_indexingRepresentation;	// IMP=0x00000000002aa629
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000002aa4be
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002eacc7
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;	// IMP=0x00000000002eaa7e
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002ea5c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
