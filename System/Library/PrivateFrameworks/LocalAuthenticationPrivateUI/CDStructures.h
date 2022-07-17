//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, MISSING_TYPE, NSObject, NSString, UIImageView;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct animation_completion_handler_container;

struct array<(anonymous namespace)::blur_container, 2UL> {
    struct blur_container __elems_[2];
};

struct blur_container {
    UIImageView *view;
    struct periodic_animation_state pulse;
};

struct map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>> {
    struct __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *__left_;
            } __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct periodic_animation_state {
    _Bool enabled;
    NSString *_key;
    CALayer *_layer;
    NSObject *_removal_timer;
};

struct vector<CAShapeLayer *, std::allocator<CAShapeLayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
    struct animation_completion_handler_container *__begin_;
    struct animation_completion_handler_container *__end_;
    struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
        struct animation_completion_handler_container *__value_;
    } __end_cap_;
};

struct vector<UIView *, std::allocator<UIView *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UIView *__strong *, std::allocator<UIView *>> {
        id *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;
