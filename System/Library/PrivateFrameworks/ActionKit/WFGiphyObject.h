//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFSerializableContent-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFGiphyObject : MTLModel <NSSecureCoding, WFNaming, WFSerializableContent, MTLJSONSerializing>
{
    NSString *_objectId;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_caption;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSDictionary *_images;	// 40 = 0x28
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x000000000023a7dd
+ (id)captionJSONTransformer;	// IMP=0x000000000023a7bd
+ (id)imagesJSONTransformer;	// IMP=0x000000000023a6ad
+ (id)urlJSONTransformer;	// IMP=0x000000000023a694
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x000000000023a61a
+ (id)allowedSecureCodingClassesByPropertyKey;	// IMP=0x000000000023a4fa
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023a4f2
- (void).cxx_destruct;	// IMP=0x000000000023b980
@property(readonly, copy, nonatomic) NSDictionary *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (id)wfSerializedRepresentation;	// IMP=0x000000000023b6c3
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)smallestImage;	// IMP=0x000000000023b4d3
- (id)originalImage;	// IMP=0x000000000023b38b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
