//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCJSClientObject, MISSING_TYPE, NSDictionary, _TtC19appstorecomponentsd11JSLocObject, _TtC19appstorecomponentsd12JSUserObject, _TtC19appstorecomponentsd14JSArcadeObject, _TtC19appstorecomponentsd20JSAppleSiliconObject, _TtC19appstorecomponentsd20JSStoreMetricsObject, _TtC19appstorecomponentsd22JSClientOrderingObject, _TtC19appstorecomponentsd28JSPersonalizationStoreObject;

@interface _TtC19appstorecomponentsd17JSASKGlobalObject : NSObject
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *loc;	// 16 = 0x10
    MISSING_TYPE *storeMetrics;	// 24 = 0x18
    MISSING_TYPE *props;	// 32 = 0x20
    MISSING_TYPE *user;	// 40 = 0x28
    MISSING_TYPE *clientOrdering;	// 48 = 0x30
    MISSING_TYPE *personalizationStore;	// 56 = 0x38
    MISSING_TYPE *arcade;	// 64 = 0x40
    MISSING_TYPE *appleSilicon;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0040000000087ed0
- (id)init;	// IMP=0x0010000000087e70
@property(nonatomic, readonly) _TtC19appstorecomponentsd20JSAppleSiliconObject *appleSilicon; // @synthesize appleSilicon;
@property(nonatomic, readonly) _TtC19appstorecomponentsd14JSArcadeObject *arcade; // @synthesize arcade;
@property(nonatomic, readonly) _TtC19appstorecomponentsd28JSPersonalizationStoreObject *personalizationStore; // @synthesize personalizationStore;
@property(nonatomic, readonly) _TtC19appstorecomponentsd22JSClientOrderingObject *clientOrdering; // @synthesize clientOrdering;
@property(nonatomic, readonly) _TtC19appstorecomponentsd12JSUserObject *user; // @synthesize user;
@property(nonatomic, readonly) NSDictionary *props;
@property(nonatomic, readonly) _TtC19appstorecomponentsd20JSStoreMetricsObject *storeMetrics; // @synthesize storeMetrics;
@property(nonatomic, readonly) _TtC19appstorecomponentsd11JSLocObject *loc; // @synthesize loc;
@property(nonatomic, readonly) ASCJSClientObject *client; // @synthesize client;

@end
