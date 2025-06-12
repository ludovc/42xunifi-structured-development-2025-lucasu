#include "food_order.h"

int	process_food_order(struct OrderRequest *request)
{
	struct OrderConfirmation	*confirmation;

	if (check_restaurant_status(request))
	{
		confirmation = create_standard_confirmation();
	}
	else
	{
		confirmation = create_preorder_confirmation();
	}
	send_confirmation_notification(confirmation);
	return (1);
}
